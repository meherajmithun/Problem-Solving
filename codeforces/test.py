import tkinter as tk

def say_hello():
    label.config(text="Hello, World!")

root = tk.Tk()
root.title("My First App")
root.geometry("300x200")

label = tk.Label(root, text="Click the button!")
label.pack(pady=20)

button = tk.Button(root, text="Say Hello", command=say_hello)
button.pack()

root.mainloop()
