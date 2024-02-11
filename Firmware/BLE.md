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