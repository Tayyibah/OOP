
class Singleton
{
private:
	Singleton();
	~Singleton();
	static Singleton * ptr;
public:
	static Singleton * CreateObject();
	static void freeObject();
};
Singleton * Singleton::ptr=0;