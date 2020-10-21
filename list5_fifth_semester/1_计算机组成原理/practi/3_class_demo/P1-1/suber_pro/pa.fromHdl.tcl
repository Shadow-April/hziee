
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name suber_pro -dir "D:/HZIEE/2-COCP/2-Prac/P1-1/suber_pro/planAhead_run_2" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "suber_pro.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {suber_pro.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top suber_pro $srcset
add_files [list {suber_pro.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
