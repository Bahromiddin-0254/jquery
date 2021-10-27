

import requests

def send_msg(text):
    token = "1882881007:AAHp83yPUBPigkpVHBSuBzxbiNNS6rO7_ns"
    chat_id = "1204383599"
    url_req = "https://api.telegram.org/bot" + token + "/sendMessage" + "?chat_id=" + chat_id + "&text=" + text 
    results = requests.get(url_req)
    print(url_req)

p=15
x,y=list(map(float,input().split()))
day=1
send_msg(f"{x} {y}")
while x<=y:
    x+=x*p/100
    day+=1
print(day)