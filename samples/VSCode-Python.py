# encoding:utf-8
from textblob import TextBlob


def text_save(filename, data):
    file = open(filename, 'a')
    for i in range(len(data)):
        s = str(data[i]).replace('[', '').replace(']', '')
        s = s.replace("'", '').replace(',', '') + '\n'
        file.write(s)
    file.close()


file_path_h = 'D:\Documents\GitHub\LaTeX_Listings_Color_Schemes\VSCode-Python.sty'
with open(file_path_h, errors='ignore') as file_object:
    lines = file_object.readlines()

blob1 = []
sent1 = []
i = 0
for line in lines:
    line = line.strip('"')
    blob1 = TextBlob(line)
    sent1.append([])
    sent1[i].append(blob1.sentiment.polarity)
    sent1[i].append(blob1.sentiment.subjectivity)
    i += 1

text_save('test.txt', sent1)
