
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ADDER4B -dir "D:/HZIEE/2-COCP/2-Prac/P1-1/ADDER4B/planAhead_run_3" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "four_bit_full_adder.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {four_bit_full_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top four_bit_full_adder $srcset
add_files [list {four_bit_full_adder.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
