<div align="center">
  <br>
  <!-- Browser Frame Wrapper -->
  <table border="0" cellspacing="0" cellpadding="0" style="border-radius: 12px; overflow: hidden; border: 1px solid #30363d; background: #161b22; width: 100%; max-width: 850px;">
    <!-- Browser Header Bar -->
    <tr style="background: #21262d; height: 38px;">
      <td style="padding-left: 15px; width: 80px;">
        <span style="color: #ff5f56; font-size: 16px;">●</span>
        <span style="color: #ffbd2e; font-size: 16px;">●</span>
        <span style="color: #27c93f; font-size: 16px;">●</span>
      </td>
      <td align="center" style="color: #8b949e; font-family: monospace; font-size: 13px;">
        🔒 https://quran-kareem-web.netlify.app/
      </td>
      <td style="width: 80px;" align="right" style="padding-right: 15px;">
        <a href="https://quran-kareem-web.netlify.app/" target="_blank" style="color: #58a6ff; font-weight: bold; font-size: 12px; text-decoration: none;">OPEN ↗</a>
      </td>
    </tr>
    <!-- Screenshot / Live Image Canvas -->
    <tr>
      <td colspan="3" align="center" style="padding: 0;">
        <a href="https://quran-kareem-web.netlify.app/" target="_blank">
          <!-- আপনার প্রজেক্টের আসল স্ক্রিনশট বা GIF লিংকটি src-এ বসান -->
          <img src="https://raw.githubusercontent.com/your-username/holy-quran-library/main/assets/app-preview.png" alt="Al-Qur'an Live App Screen" width="100%" style="display: block; border-top: 1px solid #30363d;">
        </a>
      </td>
    </tr>
  </table>
  
  <p><i>👆 Click anywhere on the frame above to launch the live application</i></p>
  <br>
</div>




# Assiut-University-Traning---SayemSamir
![Alt text for the logo](download.png)
## 👋 **[Sheets link](https://codeforces.com/group/MWSDmqGsZm/contests)** 👋

## Description
THIS REPO IS YOUR FIRST STEP IN COMPATITVE PROGRAMING WORLD :
By following this repo you will solve all of necomers training and you will improve your problem solving skills.
I solved all those problems by using c++ programing language .
I sorted the repo folders to help you organize your steps .

## Solutions
I impleneted more than one solution in some problems .
i capsulated using functions like this following example:

* solution number 1 👇
```cpp
void solution1()
{
   string str, temp;
   getline(cin, str);
   char ch;
   for (int i = 0; i < str.size(); i++)
   {
       if (str[i] != ' ')
       {
           temp += str[i];
       }

       if ((str[i] == ' ' || i == str.size() - 1) && temp.size() != 0)
       {

           for (int j = 0; j < temp.size() / 2; j++)
           {
               ch = temp[j];
               temp[j] = temp[temp.size() - 1 - j];
               temp[temp.size() - 1 - j] = ch;
           }

           if (i == str.size() - 1)
           {
               cout << temp;
           }
           else
           {
               cout << temp << " ";
           }
           temp.clear();
       }
   }
}
```
* solution number 2 👇
```cpp
void solution2()
{
   string str;
   bool space = false;
   while (cin >> str)
   {
       reverse(str.begin(), str.end());
       if (space)
       {
           cout << " ";
       }
       space = true;
       cout << str;
   }
}
```
## my codeforces handle 👇:
[sayem197](https://codeforces.com/profile/sayem197)

### Connect with me:
click the icon to contact 👇 :

[<img alt="Twitter">]([YOUR_TWITTER_PROFILE_URL](https://x.com/SamirSayem80470))
[<img alt="Facebook">](https://www.facebook.com/mdsayem197)
[<img alt="Instagram">](https://www.instagram.com/mdsayem197)



