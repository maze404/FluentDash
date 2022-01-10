[Variables]
; Version Number
Version_Number=2.5.3

; Toggle Switches
Switch=1
Switch1=1
Switch2=1
Switch3=1
Switch4=1

; Light Mode
LightDarkTheme_Text0=Light
Background_Color0=255,255,255,95
Graph_Background0=255,255,255,51
Graph_Line0=255,255,255
Graph_Line20=10,10,10
Graph_Hor_Line0=255,255,255,100
Color_Matrix10=1; 0; 0; 0; 0
Color_Matrix20=0; 1; 0; 0; 0
Color_Matrix30=0; 0; 1; 0; 0
Color_Matrix40=0; 0; 0; 1; 0
Color_Matrix50=0; 0; 0; 0; 0
Button_Color0=10,10,10,95
Button_Text_Color0=200,200,200,255

; Dark Mode
LightDarkTheme_Text1=Dark
Background_Color1=10,10,10,95
Graph_Background1=0,0,0,51
Graph_Line1=255,255,255
Graph_Line21=175,175,175
Graph_Hor_Line1=255,255,255,100
Color_Matrix11=1; 0; 0; 0; 0
Color_Matrix21=0; 1; 0; 0; 0
Color_Matrix31=0; 0; 1; 0; 0
Color_Matrix41=0; 0; 0; 1; 0
Color_Matrix51=-1; -1; -1; 0; 1
Button_Color1=255,255,255,95
Button_Text_Color1=10,10,10,255

; Blur Type
SwitchBlur=2
Blur_Type0=None
Blur_Type1=Blur
Blur_Type2=Acrylic

;Border Type
Border_Type0=None
Border_Type1=All
BorderFont_Text0=Hide
BorderFont_Text1=Show

; Dark Font
Font_Color0=25,25,25,255
Title_Color0=10,10,10,255
Bar_Tint0=25,25,25,255
LightDarkFont_Text0=Dark

; Light Font
Font_Color1=225,255,255,255
Title_Color1=255,255,255,255
Bar_Tint1=255,255,255,255
LightDarkFont_Text1=Light

; Rounded Corners
Round_Corner0=0,0
Round_Corner1=10,10
FGRound_Corner0=None
FGRound_Corner1=Round
CornerFont_Text0=None
CornerFont_Text1=Win11

; Miscellaneous Toggle Switches
; GPU
ToggleGPU=0
GPU0=OFF
GPU1=ON
GPUActive1=!DeactivateConfig "FluentDash11\GPU"
GPUActive0=!ActivateConfig "FluentDash11\GPU"

;CPU
ToggleCPU=1
SwitchCPUVersion=0
CPUActive0=!DeactivateConfig "FluentDash11\CPU"
CPUActive1=!ActivateConfig "FluentDash11\CPU" "8 Core.ini"
CPUActive2=!ActivateConfig "FluentDash11\CPU" "6 Core.ini"
CPUActive3=!ActivateConfig "FluentDash11\CPU" "4 Core.ini"
CPUActive4=!ActivateConfig "FluentDash11\CPU" "2 Core.ini"
CPUActive5=!ActivateConfig "FluentDash11\CPU" "Auto Core.ini"

SwitchCPUVersionText=1
CPUText0=OFF
CPUText1=8 Cores
CPUText2=6 Cores
CPUText3=4 Cores
CPUText4=2 Cores
CPUText5=Auto

; RAM
ToggleRAM=1
RAM0=OFF
RAM1=ON
RAMActive1=!DeactivateConfig "FluentDash11\RAM"
RAMActive0=!ActivateConfig "FluentDash11\RAM"

; Network
ToggleNetwork=3
NetworkActive0=!DeactivateConfig "FluentDash11\NETWORK"
NetworkActive1=!ActivateConfig "FluentDash11\NETWORK" "Network 3 Adapter.ini"
NetworkActive2=!ActivateConfig "FluentDash11\NETWORK" "Network 2 Adapter.ini"
NetworkActive3=!ActivateConfig "FluentDash11\NETWORK" "Network 1 Adapter.ini"
NetworkActive4=!ActivateConfig "FluentDash11\NETWORK" "Network Simple.ini"

ToggleNetworkText=4
NetworkActiveText0=OFF
NetworkActiveText1=3 Adapter
NetworkActiveText2=2 Adapter
NetworkActiveText3=1 Adapter
NetworkActiveText4=Simple

; Disk
ToggleDisk=0
DiskActive0=!DeactivateConfig "FluentDash11\Disk Usage"
DiskActive1=!ActivateConfig "FluentDash11\Disk Usage" "4 Disks.ini"
DiskActive2=!ActivateConfig "FluentDash11\Disk Usage" "3 Disks.ini"
DiskActive3=!ActivateConfig "FluentDash11\Disk Usage" "2 Disks.ini"
DiskActive4=!ActivateConfig "FluentDash11\Disk Usage" "1 Disk.ini"

ToggleDiskText=1
DiskActiveText0=OFF
DiskActiveText1=4 Disks
DiskActiveText2=3 Disks
DiskActiveText3=2 Disks
DiskActiveText4=1 Disk

; System Information
ToggleSysInfo=1
SysInfo0=OFF
SysInfo1=ON
SysInfoActive1=!DeactivateConfig "FluentDash11\SysInfo"
SysInfoActive0=!ActivateConfig "FluentDash11\SysInfo"
