# A clock dial

import turtle
screen= turtle.Screen()
trtl= turtle.Turtle()
screen.setup(620,620)
screen.title("A Clock dial made by Abir Choudhury")
screen.bgcolor('black')
clr=["red","green","white","yellow","purple"]
trtl.pensize(5)
trtl.shape('turtle')
trtl.penup()
trtl.pencolor('yellow')
m=0
for i in range(12):
    m=m+1
    trtl.penup()
    trtl.setheading(-30*i+60)
    trtl.forward(150)
    trtl.pendown
    trtl.forward(25)
    trtl.penup
    trtl.forward(20)
    trtl.write(str(m),align="center",font=("Arial",12,"normal"))
    if m==12:
        m=0
    trtl.home()
trtl.home()
trtl.setpos(0,-250)
trtl.pendown()
trtl.pensize(10)
trtl.pencolor('red')
trtl.circle(250)
trtl.penup()
trtl.setpos(150,-270)
trtl.pendown()
trtl.pencolor('olive')
trtl.write("Hello World",align="center",font=("Arial",12,"normal"))
trtl.ht()