ott =["Netflix", "Hulu", "Sling", "Hbo"]
revenue =[198, 166, 237, 125]

# ---- start --------
ottrank =  dict(zip(ott,revenue))
print(ottrank)

# ---  end ----------
valrank=list(map(lambda y: round(y,-2) if y<=200 else y, ottrank.values()))
