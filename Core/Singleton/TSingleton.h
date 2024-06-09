#ifndef ROGL3_TSINGLETON_H
#define ROGL3_TSINGLETON_H


template<typename T>
class TSingleton {
public:
    TSingleton(const TSingleton &) = delete;

    TSingleton &operator=(const TSingleton &) = delete;

    static T &getInstance() {
        static T instance;
        return instance;
    }

protected:
    TSingleton() {}

    friend T;
};


#endif //ROGL3_TSINGLETON_H
