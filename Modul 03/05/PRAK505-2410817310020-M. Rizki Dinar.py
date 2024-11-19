day = [0,0] 
hour = [0,0]
minute = [0,0]
sec = int(input())

if sec >= 86400:
    day[1] = sec-(sec%86400)
    day[0] = round(day[1]/86400)
    sec -= day[1]
    print(day[0], "Hari ", end="")

if 86400 > sec >= 3600:
    hour[1] = sec-(sec%3600)
    hour[0] = round(hour[1]/3600)
    sec -= hour[1]
    
    
if 3600 > sec >= 60:
    minute[1] = sec-(sec%60)
    minute[0] = round(minute[1]/60)
    sec -= minute[1]

if hour[0] < 10:
        hour[0] = "0"+str(hour[0])
if minute[0] < 10:
        minute[0] = "0"+str(minute[0])
if sec < 10:
        sec = "0"+str(sec)
print(f"{hour[0]}:{minute[0]}:{sec}")
    