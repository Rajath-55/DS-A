import webbrowser
import requests
import json
s = str(input())
words = s.split(' ')
word_needed = words[len(words)-1]

url = "https://api.covid19india.org/state_district_wise.json"
countries_url = "https://api.covid19api.com/countries"
countries = {}





# res = requests.get(url)
# res = json.loads(res.text)
# print(res)
countries_data = json.loads(requests.get(countries_url).text)
for i in countries_data:
    countries[i['Country']] = i['Slug']

countries['UK'] = countries['United Kingdom']
countries["US"] = countries['United States of America']
countries["USA"] = countries['United States of America']
# print(countries)   


# print(countries)

state = {"Andhra Pradesh" : "AP",
         "Arunachal Pradesh" :"AR" ,
         "Assam" : "AS",
         "Bihar" : "BR",
         "Chhattisgarh" : "CT",
         "Goa" : "GA",
         "Gujarat" : "GJ",
         "Haryana" : "HR",
         "Himachal Pradesh" : "HP",
         "Jammu and Kashmir" : "JK",
         "Jharkhand" : "JH",
         "Karnataka" : "KA",
         "Kerala" : "KL",
         "Madhya Pradesh" : "MP",
         "Maharashtra" : "MH",
         "Manipur" : "MN",
         "Meghalaya" : "ML",
         "Mizoram" : "MZ",
         "Nagaland" : "NL",
         "Odisha" : "OR",
         "Punjab" : "PB",
         "Rajasthan" : "RJ",
         "Sikkim" : "SK" ,
         "Tamil Nadu" : "TN",
         "Telangana" : "TG",
         "Tripura" : "TR",
         "Uttarakhand" : "UT",
         "Uttar Pradesh" : "UP",
         "West Bengal" : "WB",
         "Andaman and Nicobar Islands" : "AN",
         "Chandigarh" : "CH",
         "Dadra and Nagar Haveli" : "DN",
         "Daman and Diu" : "DN",
         "Delhi" : "DL",
         "Ladakh" : "LA",
         "Puducherry" : "PY"}

opened = False
for k,v in state.items():
    if k.lower()==word_needed.lower():
        quit()
        



if not opened:
    for k,v in countries.items():
        if k.lower() == word_needed.lower():
            response = requests.get('https://api.covid19api.com/live/country/' + v + '/status/confirmed').json()
            s = 0
            for i in response:
                 s+=i['Confirmed']
            print("Total cases in " + k + " : " + str(s))

