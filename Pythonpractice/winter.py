import pandas as pd
table = pd.read_html('https://en.wikipedia.org/wiki/All-time_Olympic_Games_medal_table', header=0, encoding='utf-8')
data = table[1]
winter = data.iloc[:,6:11]
con = data.iloc[:,0]
winter.columns = ['Contry','Gold','Silver','Bronze','Total']
winter.Contry = con
winter = winter.drop(index=0, axis=0)
winter2 = winter.sort_values('Silver', ascending=False)
winter3 = winter.sort_values('Gold', ascending = False)
winter