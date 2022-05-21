window.addEventListener(
	"load",
	()=>{
		let Model = {
			getContacts(){ 
				return JSON.parse(localStorage.getItem('ct')) || []
			},
			saveContacts(arr){
				return localStorage.setItem('ct',JSON.stringify(arr))
			}
		}

		let View ={

			tableContact : document.querySelector("#contacts"),
			formContact  : document.getElementById("form"),
			saveButton : document.getElementById("sauver"),

			getContactForm(){
				let data = new FormData(this.formContact)
				return {
					"nom" : data.get('nom'),
					"prenom" : data.get('prenom'),
					"email" : data.get("email")
				}
			},
			updateTable(cts){
				let fg = document.createElement("tbody")
				cts.forEach((ct)=>{	
					let tr = document.createElement("tr")
					for (p in ct){
						let td = document.createElement("td")
						let txt = document.createTextNode(ct[p])
						td.appendChild(txt)
						tr.appendChild(td)
					}
					fg.appendChild(tr)
				})
				this.tableContact.replaceChild(fg,this.tableContact.querySelector('tbody'))
			},
			suscribeSubmitForm(f){
			this.formContact.addEventListener("submit",(ev)=>{
				ev.preventDefault()
				f(this.getContactForm())
			})
			},
			suscribeSaveTable(f){
				// TODO
			},
			suscribeClickTable(f){
				// TODO	
			}
		}


		let Controller  = {
			cts : [], // les contacts
			init(){
				View.suscribeSubmitForm((ct)=>{
					if (this.cts.find(x=>x.email == ct.email) !== undefined){
					this.cts.push(ct)
					View.updateTable(this.cts)
					}
				})

				View.suscribeSaveTable(() => Model.saveContacts(this.cts))

				View.suscribeClickTable( (ct)=> {
					// TODO
				})

				this.cts = Model.getContacts()
				View.updateTable(this.cts)
			}
		}
		Controller.init()
	})
