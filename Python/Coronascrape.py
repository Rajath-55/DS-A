from bs4 import BeautifulSoup as bs
import requests
import re
url = "https://www.worldometers.info/coronavirus/"
data = requests.get(url).text
lst = list()
soup = bs(data, 'html.parser')
table = soup.find('table', {'id': 'main_table_countries_today'})
thead = soup.find('thead')
tbody = soup.find('tbody')
body = []
head=[]
for text in tbody.findAll('tr'):
    string = str(text.text.strip().split())
    string=string[1:-1]
    body.append(string)
# print(body) 
# for text in thead.find('tr'):
#     for stats in text.find('th'):
#         string = str(text.text.strip().split())
#         string=string[1:-1]
#         head.append(string)
    
print(head)    

with open('corona.txt', 'w') as file:
    for items in body:
        file.write("%s\n" % items)
