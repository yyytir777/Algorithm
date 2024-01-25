text = input().upper()
lst = list(text)
lst1 = list(set(text)) #정렬
cnt_lst = []
for i in lst1:
    cnt = lst.count(i)
    cnt_lst.append(cnt) # 각 문자 당 개수 정렬?
if cnt_lst.count(max(cnt_lst)) > 1:
    print('?')
else:
    a = cnt_lst.index(max(cnt_lst))
    print(lst1[a])