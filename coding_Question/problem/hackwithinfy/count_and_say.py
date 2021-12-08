def count_and_say(n):
    result="1"
    while(n>1):
        current=""
        i=0
        while(i<len(result)):
            count=1
            while(i+1<len(result) and result[i] == result[i+1]):
                count+=1
                i+=1
            current+=str(count)+result[i]
            i+=1
        result=current
        n-=1
    return result
n=int(input())
print(count_and_say(n))
