import tkinter as tk
from tkinter import ttk
from tkinter import messagebox

LARGEFONT =("Verdana", 35)
class tkinterApp(tk.Tk):
    def __init__(self, *args, **kwargs): 
        
        # __init__ function for class Tk
        tk.Tk.__init__(self, *args, **kwargs)
        
        # creating a container
        container = tk.Frame(self,bg="#333333") 
        container.pack(fill="both",expand=True)
    

        container.grid_rowconfigure(0, weight = 1)
        container.grid_columnconfigure(0, weight = 3)

        # initializing frames to an empty array
        self.frames = {} 

        # iterating through a tuple consisting
        # of the different page layouts
        for F in (StartPage, Page1, Page2):
                        frame = F(container, self)

                                               
                        self.frames[F] = frame 
                        frame.grid(row = 0, column = 0)
                        frame.config(padx=50,pady=70)
                        frame.grid_remove()
                        #frame.eval('tk::PlaceFrame.center')
                        #frame.grid_rowconfigure(0, weight = 1)
                        #frame.grid_columnconfigure(0, weight = 3)
                                
        self.show_frame(StartPage)
        

    # to display the current frame passed as
    # parameter
    def show_frame(self, cont):
        for fme in self.frames:
                self.frames[fme].grid_remove()
        frame = self.frames[cont]
        frame.grid()

    def login(self, cont):
        '''for fme in self.frames:
                self.frames[fme].grid_remove()
        frame = self.frames[cont]
        frame.grid()'''
        username="minnu"
        passw="12345"
        if user_entry.get()==username and pass_entry.get()==passw:
            for fme in self.frames:
                self.frames[fme].grid_remove()
            frame = self.frames[cont]
            frame.grid()
            #messagebox.showinfo(title="Login Success",message="You successfully logged in.")
        else:
            messagebox.showerror(title="Error",message="Invalid login.")
        #frame.grid()
        


# first window frame startpage

class StartPage(tk.Frame):
    def __init__(self, parent, controller):
        
        #here
        tk.Frame.__init__(self, parent,bg="#333333")
        welcome_label=tk.Label(self,text="WELCOME",bg="#333333",fg="#FF3399",font=("Arial",30))
        q_label=tk.Label(self,text="Are You a",bg="#333333",fg="#FFFFFF",font=("Arial",18))
        cust_button=tk.Button(self,text="Customer",bg="#FF3399",fg="#FFFFFF",font=("Arial",16),command = lambda : controller.show_frame(Page2))
        or_label=tk.Label(self,text="Or",bg="#333333",fg="#FFFFFF",font=("Arial",15))
        own_button=tk.Button(self,text="Owner",bg="#FF3399",fg="#FFFFFF",font=("Arial",16),command = lambda : controller.show_frame(Page1))



        welcome_label.grid(row=0,column=1,columnspan=1,sticky="news",pady=40,padx=10)
        q_label.grid(row=3,column=1,columnspan=1)
        cust_button.grid(row=4,column=0,pady=20)
        or_label.grid(row=4,column=1)
        own_button.grid(row=4,column=2)
            
'''        tk.Frame.__init__(self, parent)
        log_label=tk.Label(self,text="Login",bg="#333333",fg="#FF3399",font=("Arial",30))
        user_label=tk.Label(self,text="Username",bg="#333333",fg="#FFFFFF",font=("Arial",16))
        user_entry=tk.Entry(self,font=("Arial",16))
        pass_label=tk.Label(self,text="Password",bg="#333333",fg="#FFFFFF",font=("Arial",16))
        pass_entry=tk.Entry(self,show="*",font=("Arial",16))
        login_button=tk.Button(self,text="Login",bg="#FF3399",fg="#FFFFFF",font=("Arial",16),command = lambda : controller.show_frame(Page1))
        log_label.grid(row=0,column=0,columnspan=2,sticky="news",pady=40)
        user_label.grid(row=1,column=0)
        user_entry.grid(row=1,column=1,pady=20)
        pass_label.grid(row=2,column=0)
        pass_entry.grid(row=2,column=1,pady=20)
        login_button.grid(row=3,column=0,columnspan=2,pady=30)'''
                                
'''label of frame Layout 2
            label = ttk.Label(self, text ="Startpage", font = LARGEFONT)
        
        # putting the grid in its place by using
        # grid
        label.grid(row = 0, column = 4, padx = 10, pady = 10) 

        button1 = ttk.Button(self, text ="Page 1",
        command = lambda : controller.show_frame(Page1))
    
        # putting the button in its place by
        # using grid
        button1.grid(row = 1, column = 1, padx = 10, pady = 10)

        ## button to show frame 2 with text layout2
        button2 = ttk.Button(self, text ="Page 2",
        command = lambda : controller.show_frame(Page2))
    
        # putting the button in its place by
        # using grid
        button2.grid(row = 2, column = 1, padx = 10, pady = 10)'''

        


# second window frame page1 
class Page1(tk.Frame):
        def __init__(self, parent, controller):
                global user_entry,pass_entry
                tk.Frame.__init__(self, parent,bg="#333333")
                log_label=tk.Label(self,text="Login",bg="#333333",fg="#FF3399",font=("Arial",30))
                user_label=tk.Label(self,text="Username",bg="#333333",fg="#FFFFFF",font=("Arial",16))
                user_entry=tk.Entry(self,font=("Arial",16))
                pass_label=tk.Label(self,text="Password",bg="#333333",fg="#FFFFFF",font=("Arial",16))
                pass_entry=tk.Entry(self,show="*",font=("Arial",16))
                login_button=tk.Button(self,text="Login",bg="#FF3399",fg="#FFFFFF",font=("Arial",16),command = lambda : controller.login(Page2))
                button2 = tk.Button(self, text ="Back to First page",bg="#FF3399",fg="#FFFFFF",font=("Arial",16),command = lambda : controller.show_frame(StartPage))
                log_label.grid(row=0,column=0,columnspan=2,sticky="news",pady=40)
                user_label.grid(row=1,column=0)
                user_entry.grid(row=1,column=1,pady=20)
                pass_label.grid(row=2,column=0)
                pass_entry.grid(row=2,column=1,pady=20)
                login_button.grid(row=3,column=0,columnspan=2,pady=30)
                button2.grid(row=4,column=0,columnspan=2)
        
'''     label = ttk.Label(self, text ="Page 1", font = LARGEFONT)
        label.grid(row = 0, column = 4, padx = 10, pady = 10)

        # button to show frame 2 with text
        # layout2
        button1 = ttk.Button(self, text ="StartPage",
                            command = lambda : controller.show_frame(StartPage))
    
        # putting the button in its place 
        # by using grid
        button1.grid(row = 1, column = 1, padx = 10, pady = 10)

        # button to show frame 2 with text
        # layout2
        button2 = ttk.Button(self, text ="Page 2",
                            command = lambda : controller.show_frame(Page2))
    
        # putting the button in its place by 
        # using grid
        button2.grid(row = 2, column = 1, padx = 10, pady = 10)'''




# third window frame page2
class Page2(tk.Frame): 
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        label = ttk.Label(self, text ="Page 2", font = LARGEFONT)
        label.grid(row = 0, column = 4, padx = 10, pady = 10)

        # button to show frame 2 with text
        # layout2
        button1 = ttk.Button(self, text ="Page 1",
                            command = lambda : controller.show_frame(Page1))
    
        # putting the button in its place by 
        # using grid
        button1.grid(row = 1, column = 1, padx = 10, pady = 10)

        # button to show frame 3 with text
        # layout3
        button2 = ttk.Button(self, text ="Startpage",
                            command = lambda : controller.show_frame(StartPage))
    
        # putting the button in its place by
        # using grid
        button2.grid(row = 2, column = 1, padx = 10, pady = 10)


# Driver Code
app = tkinterApp()
app.mainloop()
