//
// Created by Justin Park on 2020/06/24.
//

//컨테이너 클래스
//다른 클래스들을 담는 클래스

//안녕하세요 교수님 첫질문입니다ㅎㅎ
//
//        reset(), resize(), insertBefore(const int& value, const int& ix), remove(const int& ix), push_back(const int & value)
//
//이렇게 함수 제목을 정해 주셨는데 resize()에서 input이 없이 구현이 가능해서 알려주신것 같은데
//
//        어떻게 input없이 resize를 할수 있는지 궁금합니다...
//
//        아래 코드는 제가 만든 함수코드 입니다

//#include <iostream>
//#include <initializer_list>
//using namespace std;
//
//class IntArray {
//private:
//    int m_length = 0;
//    int* m_data = nullptr;
//
//public:
//    IntArray(const int& length)
//            : m_length(length)
//    {
//        m_data = new int[length];
//    }
//
//    IntArray(const std::initializer_list<int> &arr)
//            :IntArray(arr.size())
//    {
//        int count = 0;
//        for (auto & e : arr) {
//            m_data[count] = e;
//            ++count;
//        }
//    }
//
//    ~IntArray() {
//        delete[] m_data;
//    }
//
//    void reset() {
//        delete[] m_data;
//    }
//
//    void resize(const int & rsize) {			//이부분이 궁금합니다!!!
//        m_length = rsize;
//        int* temp = new int[rsize];
//        memcpy(temp, m_data, sizeof(int) * m_length);
//        reset();
//        m_data = temp;
//    }
//
//    void insertBefore(const int& value, const int& ix) {
//        resize(m_length + 1);
//        for (int i = m_length-2; i > ix-1; --i)
//            m_data[i + 1] = m_data[i];
//        m_data[ix] = value;
//    }
//
//    void remove(const int& ix) {
//        for (int i = ix + 1; i < m_length; i++)
//            m_data[i - 1] = m_data[i];
//        resize(m_length - 1);
//    }
//
//    void push_back(const int & value) {
//        resize(m_length + 1);
//        m_data[m_length-1] = value;
//    }
//
//    friend ostream& operator << (ostream& out, IntArray& arr) {
//        for (unsigned i = 0; i < arr.m_length; i++)
//            out << arr.m_data[i] << " ";
//        return out;
//    }
//};
//
//
//int main() {
//
//    IntArray my_arr{ 1,3,5,7,9 };
//    cout << my_arr << endl;
//
//    my_arr.insertBefore(10, 1);				//1, 10, 3, 5, 7, 9
//    cout << my_arr << endl;
//
//    my_arr.remove(3);						//1, 10, 3, 7, 9
//    cout << my_arr << endl;
//
//    my_arr.push_back(13);					//1, 10, 3, 7, 9, 13
//    cout << my_arr << endl;
//
//
//    return 0;
//}

