def openbox():
    global count
    print("종이 상자를 엽니다.^^")
    count -= 1
    if count == 0:
        print("** 반지를 넣고 반환합니다. **")
        return
    openbox()
    print("종이 상자를 닫습니다.^^")

count = 10
openbox()   # 처음 함수를 다시 호출