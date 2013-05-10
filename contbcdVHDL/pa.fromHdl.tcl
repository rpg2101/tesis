
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name contbcdVHDL -dir "C:/Documents and Settings/contbcdVHDL/planAhead_run_2" -part xc3s1600efg320-5
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "ifcontBCD.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ifcontBCD.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top ifcontBCD $srcset
add_files [list {ifcontBCD.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s1600efg320-5
