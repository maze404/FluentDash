function Update () {
$CoreCount=(Get-CimInstance Win32_ComputerSystem).NumberOfLogicalProcessors
$RootPath=(get-childitem $HOME -recurse | Where-Object {$_.PSIsContainer -eq $true -and $_.Name -match "^FluentDash$" -and $_.FullName -match "Rainmeter\\Skins\\FluentDash"}).FullName
$WorkingDir="$RootPath\@Resources"
if ( Test-Path $WorkingDir\cpumeters.inc ) { Remove-Item $WorkingDir\cpumeters.inc}
for ($i=1; $i -le $CoreCount ; $i++) {
    if ( $i -eq 1 ) {
        $RainmeterCodeBlock=@"
[MeasureCPU1]
Measure=CPU
Processor=1

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } elseif ( $i % 4 -eq 1 -and $i -ne 1 ) {
        $RainmeterCodeBlock=@"
[MeasureCPU$i]
Measure=CPU
Processor=$i

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } else {
        $RainmeterCodeBlock=@"
[MeasureCPU$i]
Measure=CPU
Processor=$i

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    }
}
for ($i=1; $i -le $CoreCount ; $i++) {
    if ( $i -eq 1 ) {
        $RainmeterCodeBlock=@"
[MeterShapeRectangle1]
Meter=Shape
Shape=Rectangle 5,30,75,75,[#Round_Corner[#Switch3]] | Fill Color [#Graph_Background[#Switch]] | StrokeWidth 0

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } elseif ( $i % 4 -eq 1 -and $i -ne 1 ) {
        $RainmeterCodeBlock=@"
[MeterShapeRectangle$i]
Meter=Shape
Shape=Rectangle 5,,75,75,[#Round_Corner[#Switch3]] | Fill Color [#Graph_Background[#Switch]] | StrokeWidth 0
Y=5R

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } else {
        $RainmeterCodeBlock=@"
[MeterShapeRectangle$i]
Meter=Shape
Shape=Rectangle ,,75,75,[#Round_Corner[#Switch3]] | Fill Color [#Graph_Background[#Switch]] | StrokeWidth 0
X=5R
Y=-75R

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    }
}
for ($i=1; $i -le $CoreCount ; $i++) {
    if ( $i -eq 1 ) {
        $RainmeterCodeBlock=@"
[MeterCPUHistogram1]
Meter=Line
MeasureName=MeasureCPU1
X=5
Y=40
W=75
H=55
LineColor=[#Graph_Line[#Switch]]
AntiAlias=1
AutoScale=1

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } elseif ( $i % 4 -eq 1 -and $i -ne 1 ) {
        $RainmeterCodeBlock=@"
[MeterCPUHistogram$i]
Meter=Line
MeasureName=MeasureCPU$i
X=5
Y=25R
W=75
H=55
LineColor=[#Graph_Line[#Switch]]
AntiAlias=1
AutoScale=1

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    } else {
        $RainmeterCodeBlock=@"
[MeterCPUHistogram$i]
Meter=Line
MeasureName=MeasureCPU$i
X=5R
Y=0r
W=75
H=55
LineColor=[#Graph_Line[#Switch]]
AntiAlias=1
AutoScale=1

"@
Write-Output $RainmeterCodeBlock >> $WorkingDir\cpumeters.inc
    }
}
return 
}