# BLE Architecture

Application

GATT

GAP | SM | ATT

L2CAP

HCI

Link Layer

RF and PHY

# Link Layer

Describes the basic BLE link layer operations:

- Advertising
- Scanning
- Connection establishment

## Advertisement

Provide a way for devices to broadcast their presence.
Allow connection to be established.
Optional broadcast data, such as: list of supported services, device name, TX level.

Advertisement parameters:

- Advertisement interval
- Advertisement channel
- Discoverability mode
- Connectability mode
- Payload

## Scanning

Is a operation where a scanner is listening for incoming advertisement in order to discover and connect or simply to receive the data broadcast by advertising devices.

There are two types of scanning mode:

- Passive scanning
- Active scanning

Scanning parameters:

- Scan interval
- Scan window
- Scan type
- Scan mode
- Connectability mode

## Connection

Connections allow application data to be transmitted in a reliable and robust manner.
Connections also support encryption and decryption of data to ensure its confidentiality.

The BLE connection always starts by a scanner that includes the fact and the advertiser allows connections.

Connection Parameters

- Minimum Connection Interval
- Maximum Connection Interval
- Connection (peripheral) latency
- Supervision timeout

[Reference Document](https://www.silabs.com/documents/public/user-guides/ug103-14-fundamentals-ble.pdf)

# Network Topologies

Device roles in Bluetooth Low Energy:

- Advertiser: broadcasts advertisement packets, but is not able to receive them. It can allow or disallow connections.

- Scanner: only listens advertisement packets. It can connect to an advertiser. 

- Peripheral: is connected to a single central device (BT 4.0) or multiple central devices (BT 4.1 and newer).

- Central: is connected to one or more peripherals. 

- Hybrid: is possible for a device to advertise and scan at the same time or be connected to a central device and advertise or scan simultaneously. 

# GAP 

GAP is used to control how a device is visible and connectable by other devices and how to discover and connect to other devices.

GAP defines device roles that provide specific requirements for the underlying controller.

- Broadcaster (TX only).
- Observer (RX only).
- Pheripheral (RX and TX).
- Central (RX and TX).

A device can support more than one role, but only one role can be adopted at a given time.

GAP also defines modes and procedures.

Modes:

- Connectable: Can make a connection. (Non-connectable and connectable).

- Discoverable: Can be discovered (is advertising). (None, limited, general).

- Bondable: If connectable, will pair with connected device for a long-term connection. (Non-bondable and bondable).

Procedures:

- Name discovery.
- Device discovery.
- Link establishment.
- Service discovery.

# ATT

BLE profiles expose a state of a device. The state is exposed as one or more values, are called attributes

The protocol to access these attributes is called ATT.

ATT defines the communication between two devices: 

- Client: The device collect the information for one or more servers
- Server: The device store data as one or more attributes.

The client can access the server's attributes by sending the request message to this server. After that, the server will send back response message.

To greater effeciency, the server send to client two types of unsolicited messages that contain attributes:

- Notificaton: It is the message that does not require confirmation.
- Indication: This message requires client send back a confirmation.

## Attributes 

Attribute's value is array can vary from 0 to 512 bytes. 

All attributes have handles, which used to address an individual attribute. The client access to server's attribute by using handle. 

All attributes also have UUID which is used to determine what the attribute value means.

There are two types of UUID:

- Global unique UUID: has 16-bit value, is described by SIG.

- Manufacturer-specific UUID: has 128-bit value, which can be generated online.

Attribures have three types of permissions:

- Readable / Not readable.

- Writable / Not writeable.

- Readable and writable / Not readable and writeable.

The attributes may also require the following:

- Authentication to read and write.

- Authorization to read and write.

- Encryption and pairing to read and write. 

The attribute types and handles are public information. But the permissions are not.

# GATT

GATT is built on top of ATT.

GATT also has two different roles: Client and Server (similar to ATT).

GATT establishes common framework for data transported and stored.

GATT server stores data transported over ATT and accept ATT requests from GATT client.

GATT server will send response if configured. It will send notification and indication messages to GATT client when receiving ATT requests.

In GATT, atrributes are format as services and characteristics. 

Service is a collection of characteristics. Characteristic contains a single value and any number of descriptors that describe the chracteristic value. 

In summarize, hierarchical structure in BLE:

BLE profile -> Profile -> Service -> Characteristic and Descriptor. 

BLE profile consists of one or more profiles. Each profile contains at least one element which contain one service.

### Service 

As mentioned above, service is a collection of characteristics. It uses to accomplish a specific function of a device rather than a complete use case.

### Characteristic


### Reference Document
[BLE fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-14-fundamentals-ble.pdf)
[Pairing steps](https://docs.silabs.com/bluetooth/6.0.0/bluetooth-fundamentals-connections/connection-flowcharts)

