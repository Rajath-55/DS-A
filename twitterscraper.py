import urllib.parse, urllib.error, urllib.request
from bs4 import BeautifulSoup as bs
url = 'http://ethans_fake_twitter_site.surge.sh/'
uh = urllib.request.urlopen(url).read()
soup = bs(uh, 'html.parser')
# print(soup)
lst =list()

for tweet in soup.findAll("p", attrs = {"class": "content"}):
    lst.append(tweet.text)

# print (type(tweet))
print(lst)
with open('TwitterData.txt', 'w') as file:
    for i in lst:
        file.write(i)
        file.write('\n')

file.close()