class Awesome{
public:
    Awesome(void): _n(42){return; }
    int get()const {return this->_n;}
private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome& a){o <<a.get(); return o;}
template<typename T>
void print(T const &x){std::cout<<x<<std::endl; return;}