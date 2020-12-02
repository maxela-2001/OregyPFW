logstr=pfw.value
logs=json.loads(logstr)
if (logs['dip']=='127.0.0.1'):
 with open('log.txt','a') as wf:
  wf.write(logstr+"\n")
