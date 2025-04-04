# 🧠 Tech Treasure Hunt 🔐

Welcome to the **Tech Treasure Hunt** – a level-based debugging and decryption challenge designed to test your logic, patience, and problem-solving skills.

---

## 📦 What's Inside

This repository contains:

- 📁 `Level1/` – Your starting point (debug this first)
- 📁 `Level2/`, `Level3/`, and `QRCode/` – Locked zip files, unlocked progressively
- 📁 `solution/` – Contains a motivational message in case you need a little push
- 📄 `Instructions book.pdf` – Complete guide and instructions for all levels

---

## 🔑 How It Works

1. **Start with Level 1**  
   Debug the file to reveal the decrypted password.

2. **Use the Encrypted Password + Instruction**  
   Each level comes with an encrypted password and a clue (instruction).  
   Use these together **inside Level 1** to get the decrypted password.

3. **Unlock the Next Level**  
   Use the decrypted password to unzip the next level's file.

4. **Repeat Until the End**  
   - For Level 2: Use the shift value directly.
   - For Level 3: Calculate the mean ASCII value of the encrypted password, round it.
   - For QR Code: Sum the ASCII values, use the last digit.

5. **Final Challenge**  
   Unlock the QR Code zip, scan it, and fill out the form with all shift values used.

---

## 📝 Sample Instruction Table

| Level     | Encrypted Password       | Instruction                                      |
|-----------|--------------------------|--------------------------------------------------|
| Level 1   | BuggedStart              | Debug to get password                            |
| Level 2   | Y\|\|}U\|yr              | Shift value = 13                                  |
| Level 3   | <8<JziqvVw\|Nw}vl        | Use mean of filtered values → rounded shift key     |
| QR Code   | FrpslohVxffhvv           | Sum filtered values → last digit is shift key       |

---

## 💬 Pro Tip

> _“The instruction and encrypted password for each level, as given in the instruction table, are used in Level 1 to obtain the decrypted password for the corresponding file.”_

---

## 🧩 Need Help?

Check the `ForYou.txt` file inside the `solution` folder:

