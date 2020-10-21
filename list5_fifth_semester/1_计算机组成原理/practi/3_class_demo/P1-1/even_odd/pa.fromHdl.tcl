
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name even_odd -dir "D:/HZIEE/2-COCP/2-Prac/P1-1/even_odd/planAhead_run_1" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "even_odd.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {even_odd.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top even_odd $srcset
add_files [list {even_odd.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
