import webbrowser
import time

## 함수 선언 부분 ##
def isStackFull():
    global SIZE, stack, top
    if (top >= SIZE -1):        # 스택이 꽉 찼는지 확인하는 함수
        return True
    else:
        return False

def isStackEmpty():             # 스택이 비었는지 확인하는 함수
    global SIZE, stack, top
    if(top == -1):
        return True
    else:
        return False

def push(data):                 # 스택에 데이터를 삽입하는 함수
    global SIZE, stack, top
    if(isStackFull()):
        print("스택이 꽉 찼습니다.")
        return
    top += 1
    stack[top] = data

def pop():                      # 스택에서 데이터를 추춯하는 함수
    global SIZE, stack, top
    if(isStackEmpty()):
        print("스택이 비었습니다.")
        return None
    data = stack[top]
    stack[top] = None
    top -= 1
    return data

def peek():                     # 스택에서 top 위치의 데이터를 확인하는 함수
    global SIZE, stack, top 
    if(isStackEmpty()):
        print("스택이 비었습니다.")
        return None
    return stack[top]

## 전역 변수 선언 부분 ##
SIZE = 100
stack= [None for _ in range(SIZE)]
top = -1

## 메인 코드 부분 ##
if __name__ == "__main__":
    urls = ['naver.com','daum.net','nate.com']

    for url in urls:
        push(url)
        webbrowser.open('http://'+url)
        print(url, end = '-->')
        time.sleep(1)

    print("방문종료")
    time.sleep(5)

    while True:
        url = pop()
        if url == None:
            break
        webbrowser.open('http://'+url)
        print(url, end= '-->')
        time.sleep(1)
    print("방문 종료")