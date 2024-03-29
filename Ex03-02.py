## 함수 선언 부분 ##
def printPoly(p_x):
    polyStr = "P(x) = "

    for i in range(len(p_x[0])) :
        term = p_x[0][i]    # 항 차수
        coef = p_x[1][i]    # 계수

        if(coef >= 0):
            polyStr += "+"
        polyStr += str(coef) + "x^" + str(term) + " "

    return polyStr


def calcPoly(xVal, p_x):
    retValue = 0

    for i in range(len(p_x[0])):
        term = p_x[0][i]    # 항 차수
        coef = p_x[1][i]    # 계수
        retValue += coef * xValue ** term
        term -= 1

    return retValue

## 전역 변수 선언 부분 ##
px = [[300, 20, 0],
      [7, -4, 5]]

## 메인 코드 부분 ##
if __name__ == "__main__":
    pStr = printPoly(px)
    print(pStr)

    xValue = int(input("X 값-->"))

    pxValue = calcPoly(xValue, px)
    print(pxValue)
