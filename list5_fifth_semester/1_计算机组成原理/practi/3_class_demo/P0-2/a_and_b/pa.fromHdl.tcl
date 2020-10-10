
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name a_and_b -dir "D:/HZIEE/2-COCP/ChipVerify/P0-3/a_and_b/planAhead_run_1" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "a_and_b.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {a_and_b.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top a_and_b $srcset
add_files [list {a_and_b.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
