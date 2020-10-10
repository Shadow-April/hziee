
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name four_bit_selector -dir "D:/HZIEE/2-COCP/ChipVerify/P0-3/four_bit_selector/planAhead_run_1" -part xa6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "four_bit_ds.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {four_bit_ds.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top four_bit_ds $srcset
add_files [list {four_bit_ds.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xa6slx16csg324-3
