
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name First_M -dir "D:/HZIEE/2-COCP/First_M/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "D:/HZIEE/2-COCP/First_M/First_M_C.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {First_M.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top First_M $srcset
add_files [list {First_M_C.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {First_M.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
