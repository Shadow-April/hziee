
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name adder -dir "D:/HZIEE/2-COCP/ChipVerify/P0-3/adder/planAhead_run_1" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "f_adder.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {or2a.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {h_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {f_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top f_adder $srcset
add_files [list {f_adder.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
