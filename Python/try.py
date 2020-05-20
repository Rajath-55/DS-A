import requests
import csv
import time
from bs4 import BeautifulSoup

url = "https://old.reddit.com/r/datascience/"
# Headers to mimic a browser visit
headers = {'User-Agent': 'Mozilla/5.0'}

# Returns a requests.models.Response object
page = requests.get(url, headers=headers)
soup = BeautifulSoup(page.text, 'html.parser')
domains = soup.find_all("span", class_="domain")
for domain in soup.find_all("span", class_="domain"):
    if domain != "(self.datascience)":
        continue

    parent_div = domain.parent.parent.parent.parent
    print(parent_div.text)

attrs = {'class': 'thing', 'data-domain': 'self.datascience'}

for post in soup.find_all('div', attrs=attrs):
    print(post.attrs['data-domain'])    