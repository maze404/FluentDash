[Variables]
; Version Number
Version_Number=2.1.1
; Toggle Switches
Switch=1
Switch1=1
Switch2=0
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
Blur_Type=Acrylic

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
FGRound_Corner1=None
CornerFont_Text0=None
CornerFont_Text1=Win11

; Miscellaneous Toggle Switches
ToggleGPU=1
GPU0=OFF
GPU1=ON
GPUActive1=!DeactivateConfig "FluentDash11\GPU"
GPUActive0=!ActivateConfig "FluentDash11\GPU"

ToggleCPU=1
ToggleCPUOption=0
CPU0=OFF
CPU1=ON
CPUActive1=!DeactivateConfig "FluentDash11\CPU"
CPUActive0=!ActivateConfig "FluentDash11\CPU" "[#CPUVersion[#SwitchCPUVersionText]] Core.ini"

SwitchCPUVersion=2
SwitchCPUVersionText=3
CPUVersion0=2
CPUVersion1=4
CPUVersion2=6
CPUVersion3=8

ToggleRAM=1
RAM0=OFF
RAM1=ON
RAMActive1=!DeactivateConfig "FluentDash11\RAM"
RAMActive0=!ActivateConfig "FluentDash11\RAM"

ToggleNetwork=1
Network0=OFF
Network1=ON
NetworkActive1=!DeactivateConfig "FluentDash11\NETWORK"
NetworkActive0=!ActivateConfig "FluentDash11\NETWORK"


ToggleDisk=1
Disk0=OFF
Disk1=ON
DiskActive1=!DeactivateConfig "FluentDash11\Disk Usage"
DiskActive0=!ActivateConfig "FluentDash11\Disk Usage"

ToggleSysInfo=1
SysInfo0=OFF
SysInfo1=ON
SysInfoActive1=!DeactivateConfig "FluentDash11\SysInfo"
SysInfoActive0=!ActivateConfig "FluentDash11\SysInfo"
