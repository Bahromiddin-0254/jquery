import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password='mk_12_Jkim',
    database='mydb2'
)

mycursor = mydb.cursor()

mycursor.execute("SELECT * FROM person;")

for i in mycursor.fetchall():
    print(i)