# forever-alone

```sh
usbipd attach --busid 1-3 --wsl --auto-attach
sudo modprobe vhci-hcd
```

```sh
pio init
pio device list
pio run --target upload
```