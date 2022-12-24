class Area:
    def re(self, a,b):
        return a*b;
class perimeter:
    def pmeter(self, a,b):
        return 2*a+b;
    class volume(pmeter):
        def vol(self,a):
            return a*a*a;
    p=volume()
    print(p.reactangle(10,15))
    print(p.pmeter(10,15))
    print(p.vol(10,15))
    