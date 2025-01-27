# ergo-split-keeb
rp2040 based split keyboard with trrs and usb-c (2.0). Using an ergodox-esque layout, but I wanted even more keys...


![IMG_3883](https://github.com/user-attachments/assets/33cdcf36-450d-40ae-8aec-4aabae7ff8bb)
![IMG_3885](https://github.com/user-attachments/assets/f7442587-e832-4d63-bd75-a47000c1591e)
![image2](https://github.com/user-attachments/assets/86fe7989-03cf-489b-aa34-f1cd62995dc6)
![image3](https://github.com/user-attachments/assets/e0d54bd5-e8cb-4a27-b2b7-0de104296c3a)

NOTE: The firmware is for use with QMK (https://github.com/qmk/qmk_firmware), however this keyboard does not have an official commit yet. Thus, simply copy this keyboard's firmware into a new sub-folder in the "keyboards" folder and flash from there. See the QMK CLI docs for flashing the keyboard for extra help. Please note that this firmware is exceptionally early stage, and while completely functional, is relatively bare-bones. 

`qmk flash -kb "/ENTER PATH HERE" -km default -bl uf2-split-left`

`qmk flash -kb "/ENTER PATH HERE" -km default -bl uf2-split-right`
