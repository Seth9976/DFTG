// 函数名称: sub_483460
// 虚拟地址: 0x483460
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_483460(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: char** var_8 = arg1
    char** var_8 = arg1
    int32_t eax = *arg2
    char** var_8_1 = arg1
    
    if (eax == 0)
        sub_48a2c0(arg1, "gains 2 credits {credit} from Galactic Investors")
        return arg1
    
    if (eax == 1)
        int32_t var_10 = arg2[1]
        sub_48a9d0(arg1, "gains %d credits {credit} from Galactic Religion")
        return arg1
    
    if (eax == 2)
        sub_48a2c0(arg1, "gains 2 credits {credit} from Robot Surveyors")
        return arg1
    
    sub_489550(eax - 2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x25e, 
        "MakeDevelopSettleMiscPowerDesc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
