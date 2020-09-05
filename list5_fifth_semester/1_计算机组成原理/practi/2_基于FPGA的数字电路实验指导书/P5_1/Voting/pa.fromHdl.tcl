
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Voting -dir "D:/HZIEE/2-COCP/2-Prac/P5-1/Voting/planAhead_run_2" -part xa7a100tcsg324-2I
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "D:/HZIEE/2-COCP/2-Prac/P5-1/Voting/Voting_M_C.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Voting_M.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Voting_M $srcset
add_files [list {Voting_M_C.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Voting_M.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa7a100tcsg324-2I
