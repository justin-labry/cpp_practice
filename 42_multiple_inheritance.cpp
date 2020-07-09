//
// Created by Justin Park on 2020/07/06.
//

#include <iostream>

using namespace std;

class USBDevice {
private:
    long m_id;

public:
    USBDevice(long id): m_id(id) {}
    long getId() { return m_id; }
    void plugAndPlay() {}
};

class NetworkDevice {
private:
    long m_id;

public:
    NetworkDevice(long id) : m_id(id) {

    }

    long getId() {return m_id;}

    void netwokring() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice {
public:
    USBNetworkDevice(long did, long nid)
        : USBDevice(did), NetworkDevice(nid) {}
};

int main_42() {
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.USBDevice::getId();
    my_device.NetworkDevice::getId();

}
