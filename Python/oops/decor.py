def greet(fx):
    def mfx(*args, **kwargs):
        print("Good morning")
        fx(*args,**kwargs)
        print("thanks for using thid function")
    return mfx

@greet
def add(a,b):
    print(a+b)


add(3,4)