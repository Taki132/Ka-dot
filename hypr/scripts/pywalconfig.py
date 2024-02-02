import pywal
import os
import json
def colget(path):
	pywal.colors.get(path, "/home/karuto/.config/colchange/", 16)
	##excutefile
def alacrittyconvert(path):
	pywal.colors.get(path, "/home/karuto/.config/colchange/", 16)
	dataget = open("/home/karuto/.config/colchange/colors.json","r")
	data = json.load(data)
	print(data)

##os.popen("sh /home/karuto/.config/hypr/scripts/alacconvert.sh")
def restart():
	os.system("pkill waybar")
	os.system("nohup waybar&")
path = input("typing your path on this")
alacrittyconvert(path)	

