
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name abs_dif -dir "D:/HZIEE/2-COCP/2-Prac/P1-1/abs_dif/planAhead_run_4" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "mux21.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {adder1b.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {full_adder4b.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top full_adder4b $srcset
add_files [list {mux21.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
