const apiURL =  "https://jsonplaceholder.typicode.com/users";

function showUsers() {

    fetch(apiURL)
        .then(response => {

            if (!response.ok) {
                throw new Error("Something went wrong!");
            }

            return response.json();
        })

        .then(users => {
            displayUsers(users);
        })

        .catch(error => {
            document.getElementById("output").innerHTML =
                `<p>${error.message}</p>`;
        });
}


function displayUsers(users) {

    let table = `
        <table border="1" cellpadding="10" cellspacing="0">

            <tr>
                <th>Name</th>
                <th>Email</th>
                <th>Address</th>
                <th>Phone</th>
                <th>Company Name</th>
            </tr>
    `;

    users.forEach((user) => {

        table += `
            <tr>
                <td>${user.name}</td>
                <td>${user.email}</td>

                <td>
                    ${user.address.street},
                    ${user.address.city},
                    ${user.address.zipcode}
                </td>

                <td>${user.phone}</td>

                <td>${user.company.name}</td>
            </tr>
        `;
    });

    table += `</table>`;

    document.getElementById("output").innerHTML = table;
}

showUsers();