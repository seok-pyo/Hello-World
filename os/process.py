# 프로그램의 프로세스 id를 확인할 수 있다.
# import os

# print('hello, os')
# print('my process', os.getpid())

# 부모프로세스와 자식프로세스를 확인할 수 있다.
# from multiprocessing import Process
# import os

# def foo():
#     print('child process', os.getpid())
#     print('my parent is', os.getppid())

# if __name__=='__main__':
#     print('parent process', os.getpid())
#     child = Process(target=foo).start()

# 각각의 프로세스로 실행할 수 있다.
from multiprocessing import Process
import os

def foo():
    print('this is foo')

def bar():
    print('this is bar')

def baz():
    print('this is baz')

if __name__ == '__main__':
    child1 = Process(target=foo).start()
    child2 = Process(target=bar).start()
    child3 = Process(target=baz).start()