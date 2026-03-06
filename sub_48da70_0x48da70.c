// 函数名称: sub_48da70
// 虚拟地址: 0x48da70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48da70(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    HANDLE hObject = arg1[4]
    HANDLE hObject_1 = arg1[3]
    HANDLE esi = arg1[5]
    int32_t eax = *arg1
    
    if (eax == 0)
        *arg1 = 3
        sub_48d940(hObject_1)
    else if (eax == 1)
        *arg1 = 3
    else if (eax != 2)
        sub_489550(eax - 2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\coroutine.cpp", 0x17c, 
            "co_destroy_android10")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    WaitForSingleObject(esi, 0xffffffff)
    CloseHandle(esi)
    CloseHandle(hObject_1)
    CloseHandle(hObject)
    return sub_4984f0(arg1, 0x18)
}
