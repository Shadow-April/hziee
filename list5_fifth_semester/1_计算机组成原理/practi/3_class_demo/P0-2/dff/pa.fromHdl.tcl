
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name dff -dir "D:/HZIEE/2-COCP/ChipVerify/P0-3/dff/planAhead_run_1" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "dff.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {dff.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top dff $srcset
add_files [list {dff.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
