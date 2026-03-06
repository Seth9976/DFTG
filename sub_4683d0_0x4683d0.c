// 函数名称: sub_4683d0
// 虚拟地址: 0x4683d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4683d0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    int32_t* ebx = arg2
    arg2.b = 1
    int32_t eax_2 = sub_467410(ebx, arg2.b)
    
    if (*ebx != 2)
        sub_489550(eax_2, &data_5b2591, "gfx.type == ROLLGFX_TRAY_SHIPPING", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x4cbe, "ShipActionTrayDivorce")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_474300(arg1, ebx)
    int32_t* eax_3 = sub_452c30(ebx[0x14])
    sub_45a830(eax_3, eax_3, arg1, 0xd, false, 0, 0, 1, 0)
    int32_t* eax_4 = sub_452c30(ebx[0x15])
    int32_t ecx_5 = eax_4[7]
    int32_t* eax_5 = sub_452cc0(ecx_5)
    int32_t var_54 = 0
    sub_45a730(eax_5, eax_4, arg1, eax_5, 1, ecx_5.b)
    sub_45ea40(ebx)
    int32_t var_3c[0xc]
    sub_4c5670(data_126bd9c, &var_3c)
    sub_4c5920(&var_3c)
    data_632a50 = 3
    data_632a58 = eax_3[0x22a]
    int32_t result = eax_4[0x22a]
    data_632a5c = result
    @__security_check_cookie@4(eax_1 ^ &var_44)
    return result
}
