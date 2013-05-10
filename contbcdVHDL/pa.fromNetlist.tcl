
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name contbcdVHDL -dir "C:/Documents and Settings/contbcdVHDL/planAhead_run_3" -part xc3s1600efg320-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Documents and Settings/contbcdVHDL/ifcontBCD.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Documents and Settings/contbcdVHDL} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "ifcontBCD.ucf" [current_fileset -constrset]
add_files [list {ifcontBCD.ucf}] -fileset [get_property constrset [current_run]]
link_design
