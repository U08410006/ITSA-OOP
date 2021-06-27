num = [2,3,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20,21,22,23,24,25,26,27,28,31,32,36,37,38,40,42,43,45]

for i in range(30):
    si = str(i+1)
    snum = str(num[i])
    fout = open("新增資料夾 ("  + snum + ")/" + si + ".cpp",'w')
    fin = open("新增資料夾 ("  + snum + ")/" + si + ".c",'r')
    fout.write("#include <iostream> \nusing namespace std;\n")
    for line in fin.readlines():
        spos = line.find("scanf(")
        spos4 = line.find(")")
        if(spos != -1):
            # fout.write("//debug")
            str_ = line.replace(',',' >> ')
            spos2 = str_.find("&")
            spos3 = str_.find(")")
            cin =line[0:spos] + "cin >> " + str_[(spos2+1):spos3] + line[spos4+1:]
            fout.write(cin)
            continue
        pos = line.find("printf(")
        pos4 = line.find(")")
        if(pos != -1):
            # fout.write(line)
            # fout.write("//")
            now = 0
            pos_var = []
            pos2 = line.find("%")
            cnt = 0

            while pos2 != -1:
                cnt = cnt + 1
                pos_var.append(pos2)
                pos2 = line.find("%",pos2+1)

            pos3 = line.find('"')
            pos5 = line.find('"',pos3+1)
            if cnt != 0:
                cout = line[0:pos] + "cout << " + line[pos3:pos_var[0]-1]
                fout.write(cout)
                t1 = line.find(',')
                t2 = line.find(',',t1+1)
                c = 0
                for j in range(cnt):
                    if(t2 != -1):
                        fout.write(line[t1+1:t2-1])
                        fout.write(" << ")

                    else :
                        fout.write(line[t1+1:pos4])
                        fout.write(" << ")
                    if c == cnt - 1:
                        fout.write('"')
                        fout.write(line[pos_var[c]+2 : pos5])
                        fout.write('"')
                    else :
                        fout.write('"')
                        fout.write(line[pos_var[c]+2 : pos_var[c+1]-1])
                        c = c + 1
                        fout.write('" << ')
                    t1 = t2
                    t2 = line.find(',',t1+1)
                fout.write(line[pos4+1:])
            else :
                cout = line[0:pos] + "cout << " + line[pos3:pos5+1] + line[pos4+1:]
                fout.write(cout)
        else:
            fout.write(line)